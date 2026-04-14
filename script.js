// Connect to Socket.io
const socket = io();

// Countdown Timer
function updateCountdown() {
    const weddingDate = new Date('April 23, 2026 17:00:00').getTime();
    const now = new Date().getTime();
    const distance = weddingDate - now;

    if (distance > 0) {
        const days = Math.floor(distance / (1000 * 60 * 60 * 24));
        const hours = Math.floor((distance % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
        const minutes = Math.floor((distance % (1000 * 60 * 60)) / (1000 * 60));
        const seconds = Math.floor((distance % (1000 * 60)) / 1000);

        document.getElementById('days').innerText = days.toString().padStart(2, '0');
        document.getElementById('hours').innerText = hours.toString().padStart(2, '0');
        document.getElementById('minutes').innerText = minutes.toString().padStart(2, '0');
        document.getElementById('seconds').innerText = seconds.toString().padStart(2, '0');
    } else {
        document.getElementById('timer').innerHTML = '<p>The wedding has begun!</p>';
    }
}

setInterval(updateCountdown, 1000);
updateCountdown();

// Handle message form submission
document.getElementById('messageForm').addEventListener('submit', (e) => {
    e.preventDefault();
    const name = document.getElementById('name').value.trim();
    const email = document.getElementById('email').value.trim();
    const message = document.getElementById('message').value.trim();

    if (name && email && message) {
        socket.emit('new message', { name, email, message });
        document.getElementById('name').value = '';
        document.getElementById('email').value = '';
        document.getElementById('message').value = '';
    }
});

// Load existing messages
socket.on('load messages', (messages) => {
    const container = document.getElementById('messages');
    container.innerHTML = '';
    messages.forEach(addMessageCard);
});

// Add new message
socket.on('new message', (data) => {
    addMessageCard(data);
});

function addMessageCard(data) {
    const container = document.getElementById('messages');
    const card = document.createElement('div');
    card.className = 'message-card';
    card.innerHTML = `
        <h3>${data.name}</h3>
        <p>${data.message}</p>
    `;
    container.appendChild(card);
}
