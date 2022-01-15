class Stack{
    constructor(){
        this.ary = [];
    }

    push(item){
        this.ary.push(item);
    }
    pop(){
        if(this.isEmpty) return;
        else return this.ary.pop();
    }
    top(){
        return this.ary[this.ary.length-1];
    }
    size(){
        return this.ary.length;
    }
    show(){
        for(let i=0;i<this.size();i++){
            console.log(this.ary[i]);
        }
    }
    isEmpty(){
        if(size<=0) true;
        else false;
    }
}

const stack = new Stack;
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(5);
stack.show();
stack.pop();
stack.show();