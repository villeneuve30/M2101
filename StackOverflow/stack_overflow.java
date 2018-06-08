public class stack_overflow{
	public stack_overflow(){}
	
	public int f(int n){
		if(n<=0){
			return 0;
		}
		
		if(n>=1){
			return 1+f(n-1);
		}else{
			return 0;
		}
	}

	public void main(){
		stack_overflow fct= new stack_overflow();
		fct.f(1000);
	}	
}


