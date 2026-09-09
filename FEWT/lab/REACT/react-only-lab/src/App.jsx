import { BrowserRouter, Route, Routes } from "react-router-dom";
import Contact from "./lab-20/Contact";
import Home from "./lab-20/Home";
import Layout from "./lab-20/Layout";
import Music from "./lab-20/Music";
import Video from "./lab-20/Video";
import UseStateDemo from "./Lab-21/UseStateDemo";
import UseEffectDemo from "./Lab-21/UseEffectDemo";
import Password from "./Lab-21/Password";
import { useState } from "react";
import A from "./lab-18/B-part/A";
import 'bootstrap/dist/css/bootstrap.min.css';
import Calculator from "./Lab-22/Calculator";


function App() {
    // const [name,setName]=useState("")
    return (
        <>
            {/* <BrowserRouter>
                <Routes>
                    <Route path="/" element={<Layout />}>
                        <Route path="/Home" element={<Home />} />
                        <Route path="/Contact" element={<Contact />}>
                            Contact
                        </Route>
                        <Route path="/Music" element={<Music />}>
                            Music
                        </Route>
                        <Route path="/Video" element={<Video />}>
                            Video
                        </Route>
                    </Route>
                </Routes>
            </BrowserRouter> */}
            {/* <UseStateDemo/> */}
            {/* <UseEffectDemo/> */}
            {/* <Password/> */}
            {/* <A name={name} setName={setName}/> */}
            {/* <A name={name} setName={setName}/> */}
            <Calculator/>
        </>
    );
}

export default App;
