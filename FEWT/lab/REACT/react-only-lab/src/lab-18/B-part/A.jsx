import React, { useState } from 'react'

function A({name,setName}) {
    const[input,setInput]=useState("")
  return (
    <>
    <B name={name} setName={setName} setInput={setInput} input={input}/>
    <input type="text" onChange={(e)=>{
        setInput(e.target.value)
    }}/>
    </>
  )
}

function B(props) {
  return (
    <>
    {/* <br /> */}
    <button onClick={()=>{
        props.setName(props.input)
    }}>Click</button>
    {/* <br /> */}
    <C name={props.name}/>
    </>
  )
}

function C(props) {
  return (
    <>
    <D name={props.name}/>
    </>
  )
}

function D(props) {
  return (
    <>
    <E name={props.name}/>
    </>
  )
}

function E(props) {
  return (
    <>
    <F name={props.name}/>
    </>
  )
}

function F(props) {
  return (
    <>
    <br />
    <h1>{props.name}</h1>
    </>
  )
}
export default A
