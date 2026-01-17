typedef struct
{
    char Code[8];
    char Name[20];
    double Salary;
} Employee;
void InputEmployee(Employee * emp){
    
	 fflush(stdin);
    gets(emp->Name);
	 fflush(stdin);
    scanf("%lf", emp->Salary); fflush(stdin);
}
void DisplayEmployee(Employee * emp){
    printf("%s   %s         %.2lf",emp->Code,emp->Name,emp->Salary);
}
int main(){
	Employee e;
InputEmployee(&e);
DisplayEmployee(&e);
}
