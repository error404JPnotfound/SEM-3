import React from 'react'
import './Header.css'
export default function Header() {
    return (
        <header>
            <div className="text-center mt-4 mb-2">
                <a href="https://www.incredibleindia.gov.in/en" target="_blank">
                    <img className="incredible-logo" src="/Resouces/Incredible-logo.png" alt="Incredible India" />
                </a>
            </div>


            <nav className="d-flex justify-content-center flex-wrap py-2 mb-0">
                <link className="nav-pill-link" to="about">About</link>
                <link className="nav-pill-link" to="incredible">Home</link>
                <link className="nav-pill-link" to="gallery">Gallery</link>
                <link className="nav-pill-link" to="places">Places</link>
                <link className="nav-pill-link" to="travelinfo">Travel Info</link>
                <link className="nav-pill-link" to="contact">Contact</link>
            </nav>
            <hr className="border-dark mx-3"/>
        </header>
    )
}
