import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        if(a==0){

            if(x==0 && b>y){
                System.out.println(3);
            }else{
                System.out.println(1);
            }

        }else if(b==0){

            if(y==0 && a>x){
                System.out.println(3);
            }else{
                System.out.println(1);
            }
            
        }else{
            System.out.println(2);
        }
    }
}
