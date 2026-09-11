import React, { useState } from 'react'

function Crud() {
    const[stuList,setStuList]=useState([]);
    const[student,setStudent]=useState({
        FirstName:"",
        LastName:"",
        Spi:""
});
    const handleAdd= ()=>{
        if(!student.FirstName||!student.LastName||!student.Spi){
          alert("Any one of the value is NULL");
          return;
        }
        else {
          setStuList([...stuList,{...student}]);
          setStudent({FirstName:"",LastName:"",Spi:""});
        }
    };
    const handleDelete=(index)=>{
      const newList = [...stuList];
      newList.splice(index,1);
      setStuList(newList);
    };
  return (
    <>
    <label htmlFor="" >First Name</label>
    <input type="text" value={student.FirstName} onChange={(e)=>{
        setStudent({...student, FirstName:e.target.value});
    }} />
    <br />
    <label htmlFor="" >Last Name</label>
    <input type="text" value={student.LastName} onChange={(e)=>{
        setStudent({...student,LastName:e.target.value});
    }} />
    <br />
    <label htmlFor="" >SPI</label>
    <input type="text" value={student.Spi} onChange={(e)=>{
        setStudent({...student,Spi:e.target.value});
    }} />
    <br />
    <button onClick={handleAdd}>Add</button>
        <button onClick={()=>{handleDelete()}}>Delete</button>
    <table>
      <thead>
        <tr>
        <th>First Name</th>
        <th>Last Name</th>
        <th>SPI</th>
        </tr>
      </thead>
      <tbody>
        {stuList.map((Student)=>(
          <tr>
          <td>{Student.FirstName}</td>
          <td>{Student.LastName}</td>
          <td>{Student.Spi}</td>
          </tr>
        ))}
      </tbody>
    </table>

    </>
  )
}

export default Crud
