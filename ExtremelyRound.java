import java.util.Scanner;

public class ExtremelyRound{
    int pow(int a, int b){
        int p=1;
        int i=1;
        while(i<=b){
            p*=a;
            i++;
        }
        return p;
    }
    public void solve(){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int e=-1;
        int x=n;
        while(x!=0){
            x/=10;
            e++;
        }
        int res=9*e+n/pow(10,e);
        System.out.println(res);
    }
    public static void main(String[] args){
        ExtremelyRound o1=new ExtremelyRound();
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t!=0){
            o1.solve();
            t--;
        }
    }
}