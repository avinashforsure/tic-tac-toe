let boxes = document.querySelectorAll('.box');
let resetButton = document.querySelector('#reset');
let congo = document.querySelector('.congo');
let turnO=true;
const winCombinations = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]];
boxes.forEach((box) => {
    box.addEventListener('click',()=>{
        
        console.log('Box was clicked');
        if(turnO){
            box.innerText="O";
            turnO=false;
        }
        else{
            box.innerText="X";
            turnO=true;
        }
        box.disabled=true;
        checkWinner();
        
    });
}); 
const checkWinner=()=>{
for(let pattern of winCombinations){
    let p1=boxes[pattern[0]].innerText;
    let p2=boxes[pattern[1]].innerText;
    let p3=boxes[pattern[2]].innerText;
    
    if(p1!="" && p2!="" && p3!=""){
        if(p1==p2 && p2==p3){
            console.log(`${p1} is the winner`);
            disableBox();
            congo.innerText=`${p1} is the winner!`;
}
}
}
};
const disableBox=()=>{
    for(box of boxes){
        box.disabled=true;
    }
}


const resetAll=()=>{

    for(box of boxes){
        box.disabled=false;
        box.innerText="";
    }
    congo.innerText="";
    turnO=true;
};

resetButton.addEventListener('click',resetAll);