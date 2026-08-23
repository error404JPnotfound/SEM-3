import React, { useState } from 'react'
import C from './C';

function B(props) {
    const[input,setInput]=useState("");
  return (
    <div>
      <h1>Enter Name</h1>
      <br />
      <input type="text" onChange={(e)=>{
        setInput(e.target.value);
      }}/>
      <br />
      <button onClick={()=>{
        props.setName(input);
      }}>Click</button>
      <br />
      <C name={props.name}/>
    </div>
  )
}

export default B
