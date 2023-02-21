import java.util.Scanner;

public class vc {
    public static void main(String[] args) {
        System.out.println("Enter the string:");
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int c=sc.nextInt();
        if(c==1){
            vcc(s);
        }

    }
    static void vcc(String s){
        for(int i=0;i<s.length();i++){

        if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'){
            System.out.println("Vowel is: "+s.charAt(i));
        }

    }
        for(int i=0;i<s.length();i++){

        if(s.charAt(i)!='a'||s.charAt(i)!='e'||s.charAt(i)!='i'||s.charAt(i)!='o'||s.charAt(i)!='u'||s.charAt(i)!='A'||s.charAt(i)!='E'||s.charAt(i)!='I'||s.charAt(i)!='O'||s.charAt(i)!='U'){
            System.out.println("Consonant is: "+s.charAt(i));
        }

    }
}

}
