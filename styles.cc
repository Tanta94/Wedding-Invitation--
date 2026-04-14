/* Minimalist Wedding Invitation Styles */

body {
    font-family: 'Playfair Display', serif;
    background-color: #000;
    color: #fff;
    margin: 0;
    padding: 0;
    overflow-x: hidden;
}

.container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
}

.hero {
    text-align: center;
    padding: 50px 20px;
    position: relative;
}

.hearts {
    position: absolute;
    top: 20px;
    left: 50%;
    transform: translateX(-50%);
    width: 100%;
}

.heart {
    font-size: 2rem;
    color: #ff69b4;
    animation: float 3s ease-in-out infinite;
    display: inline-block;
    margin: 0 10px;
}

.heart:nth-child(2) {
    animation-delay: 1s;
}

.heart:nth-child(3) {
    animation-delay: 2s;
}

@keyframes float {
    0%, 100% { transform: translateY(0px); }
    50% { transform: translateY(-20px); }
}

h1 {
    font-family: 'Dancing Script', cursive;
    font-size: 4rem;
    margin: 20px 0;
    color: #fff;
}

.subtitle {
    font-size: 1.5rem;
    margin-bottom: 30px;
    color: #ccc;
}

.event-info p {
    font-size: 1.2rem;
    margin: 10px 0;
}

.map-container {
    margin: 20px 0;
    border-radius: 10px;
    overflow: hidden;
}

.btn {
    display: inline-block;
    background-color: #ff69b4;
    color: #fff;
    padding: 10px 20px;
    text-decoration: none;
    border-radius: 5px;
    margin-top: 10px;
    transition: background-color 0.3s;
}

.btn:hover {
    background-color: #ff1493;
}

.countdown {
    text-align: center;
    margin: 50px 0;
}

.countdown h2 {
    font-size: 2rem;
    margin-bottom: 20px;
}

#timer {
    display: flex;
    justify-content: center;
    flex-wrap: wrap;
}

.time-box {
    background-color: rgba(255, 255, 255, 0.1);
    border-radius: 10px;
    padding: 20px;
    margin: 10px;
    text-align: center;
    min-width: 80px;
}

.time-box span {
    font-size: 2rem;
    font-weight: bold;
    color: #ff69b4;
}

.time-box p {
    margin: 5px 0 0;
    font-size: 0.9rem;
    text-transform: uppercase;
}

.message-section {
    margin: 50px 0;
}

.message-section h2 {
    text-align: center;
    font-size: 2rem;
    margin-bottom: 30px;
}

#messageForm {
    display: flex;
    flex-direction: column;
    max-width: 500px;
    margin: 0 auto 40px;
}

#messageForm input,
#messageForm textarea {
    margin-bottom: 10px;
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 5px;
    background-color: rgba(255, 255, 255, 0.1);
    color: #fff;
}

#messageForm textarea {
    resize: vertical;
    min-height: 100px;
}

.messages-container {
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
}

.message-card {
    background-color: rgba(255, 255, 255, 0.1);
    border-radius: 10px;
    padding: 20px;
    margin: 10px;
    max-width: 300px;
    animation: popIn 0.5s ease-out;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
}

@keyframes popIn {
    0% { transform: scale(0.8); opacity: 0; }
    100% { transform: scale(1); opacity: 1; }
}

.message-card h3 {
    margin: 0 0 10px;
    font-size: 1.2rem;
    color: #ff69b4;
}

.message-card p {
    margin: 0;
    font-size: 1rem;
}

/* Responsive */
@media (max-width: 768px) {
    h1 {
        font-size: 3rem;
    }

    .time-box {
        min-width: 60px;
        padding: 15px;
    }

    .time-box span {
        font-size: 1.5rem;
    }

    .message-card {
        max-width: 100%;
    }
}
