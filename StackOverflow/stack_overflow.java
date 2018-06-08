public class Fonction{
	
	public Fonction(){
	}
	
	public int f(int n){
		if(n<=0){
			return 0;
		}
		
		if(n>=1){
			return 1+f(n-1);
		} 
	}	
}

public static void main(){
	Fonction fct= new Fonction();
	fct.f(1000);
}
