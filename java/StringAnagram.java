import java.util.*;
public class StringAnagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter First String: ");
        String s1 = sc.nextLine();
        System.out.println("Enter Second String: ");
        String s2 = sc.nextLine();

        int s1freq[] = new int[256];
        boolean isAnagram = true;

        for(char c: s1.toCharArray()){
            int index = (int) c;
            s1freq[index]++;
        }
        for(char c: s2.toCharArray()){
            int index = (int) c;
            s1freq[index]--;
        }
        for(int i=0; i<256; i++){
            if(s1freq[i] != 0){
                isAnagram = false;
                break;
            }
        }
        if(isAnagram) System.out.println("Anagram");
        else System.out.println("Not Anagram");

        sc.close();

    }
}
