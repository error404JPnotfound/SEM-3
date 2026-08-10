import React from 'react'
import Header from '../component/Header'
function Home() {
    return (
        <div>
            <Header/>
            <div className="container-fluid px-4 my-5">
            <h2 className="text-center text-decoration-underline mb-5"><u>India At a Glance</u></h2>
            <div className="india-card">
                <div className="row align-items-center">
                    <div className="col-md-6 text-center mb-4 mb-md-0">
                        <img src="Resouces/wmremove-transformed.jpeg" id="photo1" alt="India" />
                    </div>
                    <div className="col-md-6">
                        <p style="font-size: 22px;">India is a land of ancient wisdom and living traditions, where history
                            and culture thrive side by side.
                            From the majestic Himalayas to serene backwaters and golden deserts, its landscapes are
                            breathtakingly diverse.
                            Each region reflects a unique identity shaped by languages, customs, and vibrant festivals.
                            India is the birthplace of major religions and a center of spiritual discovery.
                            Its art, architecture, and monuments tell stories of glorious civilizations.
                            Traditional values blend seamlessly with modern progress and innovation.
                            Indian cuisine offers a rich tapestry of flavors and aromas.
                            Warm hospitality defines the spirit of its people.
                            Incredible India is a journey that touches the soul.
                        </p>
                    </div>
                </div>
            </div>
        </div>



            <div className="container-fluid px-4">
                <h2 className="text-center fw-bold mb-4">FAMOUS FESTIVALS</h2>
                <br /><br />
                    <h2 className="text-center mb-3">DIWALI</h2>
                    <div className="india-card mb-5">
                        <div className="row align-items-center">
                            <div className="col-md-6 text-center mb-4 mb-md-0">
                                <div className="festival-link-wrap">
                                    <a href="https://youtu.be/HrrW3rO51ak?si=lhRvSkA10BupO3Hs" target="_blank">
                                        <img className="festival-img" src="Resouces/diwaliremove.jpeg" alt="Diwali" />
                                    </a>
                                    <span className="tooltip-hint">Click to watch the video</span>
                                </div>
                            </div>
                            <div className="col-md-6">
                                <p style="font-size: 1.3rem;">Diwali, the Festival of Lights, is one of India's most cherished
                                    celebrations, symbolising the victory of light over darkness and good over evil. Marked by the
                                    glow of oil lamps, vibrant rangoli, fireworks, and the warmth of family gatherings, Diwali fills
                                    homes and hearts with joy and hope. Rooted in ancient traditions yet celebrated with modern
                                    spirit, the festival reflects India's rich cultural diversity, spiritual depth, and timeless
                                    message of renewal, prosperity, and togetherness—truly capturing the soul of Incredible India.
                                </p>
                            </div>
                        </div>
                    </div>


                    <h2 className="text-center mb-1">HOLI</h2>
                    <hr className="mx-5 mb-3" />
                        <div className="india-card mb-5">
                            <div className="row align-items-center">
                                <div className="col-md-6 text-center mb-4 mb-md-0">
                                    <div className="festival-link-wrap">
                                        <a href="https://youtu.be/ek3coC3ej2U?si=RMoV-tDnQVqVDDJa" target="_blank">
                                            <img className="festival-img" src="Resouces/holi.jpg" alt="Holi" />
                                        </a>
                                        <span className="tooltip-hint" style="color: yellow;">Click to watch the video</span>
                                    </div>
                                </div>
                                <div className="col-md-6">
                                    <p style="font-size: 1.3rem;">Holi, the vibrant festival of colors, celebrates the joy of life, the
                                        arrival of spring, and the triumph of good over evil. Observed across India with great
                                        enthusiasm, it brings people together as streets come alive with clouds of color, music,
                                        laughter, and festive delicacies. Rooted in ancient traditions and legends, Holi symbolizes
                                        renewal, harmony, and unity, breaking barriers of age, caste, and culture. More than a festival,
                                        it is an expression of India's spirit—warm, inclusive, and endlessly colorful.</p>
                                </div>
                            </div>
                        </div>


                        <h2 className="text-center mb-1">UTTRAYAN</h2>
                        <hr className="mx-5 mb-3" />
                            <div className="india-card mb-5">
                                <div className="row align-items-center">
                                    <div className="col-md-6 text-center mb-4 mb-md-0">
                                        <div className="festival-link-wrap">
                                            <a href="https://youtu.be/DykL4j3KnFU?si=3lHnkmp9D15yEJmC" target="_blank">
                                                <img className="festival-img" src="Resouces/uttrayan.jpg" alt="Uttrayan" />
                                            </a>
                                            <span className="tooltip-hint" style="color: rgb(115, 237, 91);">Click here to see the video</span>
                                        </div>
                                    </div>
                                    <div className="col-md-6">
                                        <p style="font-size: 1.3rem;"><strong>Uttarayan</strong>, also known as the Kite Festival, is a
                                            vibrant celebration
                                            that marks the sun's northward journey and the arrival of longer, brighter days in India.
                                            Observed mainly in Gujarat and other parts of the country, the festival fills the sky with
                                            colorful kites as families and friends gather on rooftops in joyful competition. Traditional
                                            music, festive sweets like <em>tilgul</em> and <em>chikki</em>, and the spirit of togetherness
                                            make Uttarayan
                                            a symbol of hope, prosperity, and the harmony between nature and culture—truly reflecting the
                                            timeless charm of Incredible India.
                                        </p>
                                    </div>
                                </div>
                            </div>
                        </div>

                        <audio autoplay
                            src="../incredible india/Resouces/Incredible India (Vibrant Travel Vlog Theme) - Aditya Pathak (1).flac"></audio>
                    </div>
                    )
}

                    export default Home