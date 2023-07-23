function first(){
console.log("INSIDE FIRST");
    function second(){
        console.log("INSIDE SECOND");
    }
    return second();
}
first();