import React from 'react'
import { useEffect } from 'react'
import { useState } from 'react'



function Password() {
    const [Login,setLogin]=useState(0)
    const [name,setName]=useState('');
    const [Pass,setPass]=useState('');

    function Checker(){
    if(name=='Jeel' && Pass=='Jeel@123'){
        console.log("Success");
        setLogin(true);
    }
    else {
        console.log("False");
        setLogin(false);
    }
}
  return (
    <>
    <input type="text" onChange={(e)=>{
        setName(e.target.value);
    }} />
    <br />
    <input type="text" />
    <br />
    <button onClick={Checker}>Submit</button>
    {Login && <h1>success</h1>}
    </>
  )
}
export default Password
