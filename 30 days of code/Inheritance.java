// Problem Link : https://www.hackerrank.com/challenges/30-inheritance/problem



class Student extends Person{
	public int[] testScores;
    public Student(String firstName, String lastName, int identification, int[] testScores)    {
        super(firstName, lastName, identification);
        this.testScores = testScores;   
    }
    char calculate()    {
        int res=0;
        char grade;
        for(int i=0; i<testScores.length; i++)  {
            res = res+testScores[i];
        }
        res=res/testScores.length;
        return ( res > 89 ? 'O' : 
         res > 79 ? 'E' : 
         res > 69 ? 'A' : 
         res > 54 ? 'P' :
         res > 39 ? 'D' : 'T' );
    }
}
