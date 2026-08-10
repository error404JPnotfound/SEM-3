function Parent(props) {
    return (
        <>
            <h1>Name= {props.name}</h1>
            <h2>Age = {props.age}</h2>
        </>
    );
}
function Child() {
    return(
    <div>
        <Parent name="JP" age="18" />
    </div>
    )
}

export default Child;
