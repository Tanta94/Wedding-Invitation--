/* Custom Styles for Wedding Invitation */

body {
    font-family: 'Roboto', sans-serif;
    line-height: 1.6;
    color: #333;
}

h1, h2, h3, h4, h5, h6 {
    font-family: 'Playfair Display', serif;
}

.hero-section {
    background: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://via.placeholder.com/1920x1080?text=Wedding+Background') no-repeat center center;
    background-size: cover;
    height: 100vh;
    display: flex;
    align-items: center;
    justify-content: center;
    position: relative;
}

.overlay {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(255, 192, 203, 0.3); /* Soft pink overlay */
}

.couple-photo {
    border: 5px solid #fff;
    box-shadow: 0 4px 8px rgba(0,0,0,0.1);
    margin: 20px 0;
}

.btn-primary {
    background-color: #d4af37; /* Gold */
    border-color: #d4af37;
    transition: background-color 0.3s ease;
}

.btn-primary:hover {
    background-color: #b8860b;
    border-color: #b8860b;
}

.btn-secondary {
    background-color: #6c757d;
    border-color: #6c757d;
}

.time-box {
    background: #f8f9fa;
    border-radius: 10px;
    padding: 20px;
    margin: 0 10px;
    text-align: center;
    box-shadow: 0 2px 4px rgba(0,0,0,0.1);
}

.time-box span {
    font-size: 2rem;
    font-weight: bold;
    color: #d4af37;
}

.time-box p {
    margin: 0;
    font-size: 0.9rem;
    text-transform: uppercase;
}

/* Slideshow */
.slideshow-container {
    max-width: 1000px;
    position: relative;
    margin: auto;
}

.slide {
    display: none;
}

.slide img {
    width: 100%;
    height: auto;
}

.prev, .next {
    cursor: pointer;
    position: absolute;
    top: 50%;
    width: auto;
    margin-top: -22px;
    padding: 16px;
    color: white;
    font-weight: bold;
    font-size: 18px;
    transition: 0.6s ease;
    border-radius: 0 3px 3px 0;
    user-select: none;
}

.next {
    right: 0;
    border-radius: 3px 0 0 3px;
}

.prev:hover, .next:hover {
    background-color: rgba(0,0,0,0.8);
}

.dot {
    cursor: pointer;
    height: 15px;
    width: 15px;
    margin: 0 2px;
    background-color: #bbb;
    border-radius: 50%;
    display: inline-block;
    transition: background-color 0.6s ease;
}

.active, .dot:hover {
    background-color: #717171;
}

.fade {
    animation-name: fade;
    animation-duration: 1.5s;
}

@keyframes fade {
    from {opacity: .4}
    to {opacity: 1}
}

/* Responsive */
@media (max-width: 768px) {
    .hero-section {
        height: 80vh;
    }

    .time-box {
        margin: 5px;
        padding: 10px;
    }

    .time-box span {
        font-size: 1.5rem;
    }

    .display-4 {
        font-size: 2.5rem;
    }
}

@media (max-width: 576px) {
    .d-flex {
        flex-direction: column;
    }

    .time-box {
        margin: 10px 0;
    }
}
