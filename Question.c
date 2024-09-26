#include <stdio.h>
#include <ctype.h>
#include <string.h>

//[PROBLEM 1]
// char getGrade(int score) {
//     if (score >= 90 && score <= 100) {
//         return 'A';
//     } else if (score >= 80 && score <= 89) {
//         return 'B';
//     } else if (score >= 70 && score <= 79) {
//         return 'C';
//     } else if (score >= 60 && score <= 69) {
//         return 'D';
//     } else {
//         return 'F';
//     }
// }
// int main() {
//     int score;
//     printf("Enter the score: ");
//     scanf("%d", &score);
//     char grade = getGrade(score);
//     printf("The grade is: %c\n", grade);
//     return 0;
// }



//[PROBLEM 2]
// void determine(int num){
//         if(num > 0){
//         printf("Positive");
//         }else if (num < 0){
//         printf("Negative");
//         }else{
//         printf("Zero");
//         }
//     }
// int main (){
//         int num;
//         printf("Enter your:\n");
//         scanf("%d",&num);
//         determine(num);
//         return 0;
// }


//[PROBLEM 3]
// const char* classify_triangle(int a, int b, int c) {
//     // Check if the given sides form a valid triangle
//     if (a + b > c && a + c > b && b + c > a) {
//         if (a == b && b == c) {
//             return "Equilateral";
//         } else if (a == b || b == c || a == c) {
//             return "Isosceles";
//         } else {
//             return "Scalene";
//         }
//     } else {
//         return "Not a valid triangle";
//     }
// }
// int main() {
//     int side1, side2, side3;
//     printf("Enter the lengths of the three sides of the triangle: ");
//     scanf("%d %d %d", &side1, &side2, &side3);

//     printf("The triangle is %s.\n", classify_triangle(side1, side2, side3));
//     return 0;
// }



//[PROBLEM 4]
// void check_vowel_or_consonant(char c){
//     char lower_c = tolower(c);
//     if(lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u'){
//         printf("%c is a vowel .\n", c);
//     }else if (isalpha(c)){
//         printf("%c is a consonant .\n", c);
//     }else {
//         printf("%c is a not an alphabet .\n", c);
//     }
// }
// int main(){
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);
//     check_vowel_or_consonant(ch);
//     return 0;
// }



//[PROBLEM 5]
// int is_eligible_to_vote(int age){
//     if(age >= 18){
//         printf("Eligible to vote.\n");
//     } else {
//         printf("Not eligible to vote.\n");
//     }
// }
// int main(){
//     int age = 20;
//     printf("Enter a valid age:");
//     scanf("%d",&age);
//     if(is_eligible_to_vote(age)){
//         printf("The person is eligible to vote.\n");
//     }else{
//         printf("The person is not eligible to vote.\n");
//     }
//     return 0;
// }



//[PROBLEM 6]
// int check_login(char *username, char *password){
//     char correct_username[] = "admin";
//     char correct_password[] = "1947";
//     if(strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0){
//         return 1; // login successful
//     }else{
//         return 0; // login failed
//     }
// }
// int main(){
//     char username[20];
//     char password[20];
//     printf("Enter username:");
//     scanf("%19",username);

//     printf("Enter password:");
//     scanf("%19",password);
//     if(check_login(username, password)){
//         printf("Login successful.\n");
//     } else {
//         printf("Login failed.\n");
//     }
//     return 0;
// }



//[PROBLEM 7]
// void traffic_light(char *Light_color){
//     if (strcmp(Light_color, "Red") == 0){
//         printf("Stop");
//     }else if (strcmp(Light_color, "yellow") == 0){
//         printf("Slow down");
//     }else if (strcmp(Light_color, "green") == 0){
//         printf("Go");
//     }else{
//         printf("Invalid color. Please enter a valid color.");
//     }
// }
// int main(){
//     char Light_color[10];
//     printf("Enter the current light color (Red, yellow, green): ");
//     scanf("%9s", &Light_color);
//     traffic_light(Light_color);
//     return 0;
// }



//[PROBLEM 8]
// int main(){
//     int arr[7] = {1,5,8,9,7,6,3,};
//     int max = arr[0];
//     for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     return 0;
// }



//[PROBLEM 9]
// int main(){
//     int nums[] = {4,2,8,5,1};
//     int len = sizeof(nums)/sizeof(nums[0]);
//     int i, j, temp;
//     for (i = 0; i < len -1; i++){
//         for(j = 0; j < len -1; j++){
//             if(nums[j] > nums[j+1]){
//                 temp = nums[j];
//                 nums[j] =nums[j+1];
//                 nums[j+1] = temp;
//             }
//         }
//     }
//     printf("sorted array :");
//     for(i = 0; i < len; i++){
//         printf("%d", nums[i]);
//     }
//     printf("\n");
//     return 0;
// }



//[PROBLEM 10]
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     printf("even number :"); 
//     for(int i = 0; i < len; i++){
//         if(arr[i] % 2 == 0){
//         printf("%d ", arr[i]);  
//         }
//     }
//     printf("\n");
//     printf("odd number :");
//     for(int j  = 0; j < len; j++){
//         if(arr[j] % 2!= 0){
//         printf("%d ", arr[j]);  
//         }
//     }
//     printf("\n");
//     return 0;
// }



//[PROBLEM 11]
// int main(){
//     int arr[] = {1,2,2,3,4,4,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int i,j,k;
//     for(i = 0; i < len; i++){
//         for(j = i + 1; j < len; j++){
//             if(arr[i] == arr[j]){
//                 for(k = j; k < len - 1 ; k++){
//                     arr[k] = arr[k + 1];
//                 }
//                 len--;
//                 j--;
//             }
//         }
//     }
//     printf("update arr:");
//     for(i = 0; i < len; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }



//[PROBLEM 12]
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int num,i;
//     printf("Enter a number to add :");
//     scanf("%d",&num);

//     int new_len = len + 1;
//     int new_arr[new_len];

//     for(i = 0; i < len ; i++){
//         new_arr[i] = arr[i];
//     }
//     new_arr[new_len - 1] = num;
//     printf("Updated array :");
//     for( i = 0; i < new_len; i++){
//         printf("%d", new_arr[i]);
//     }
//     printf("\n");
//     return 0;
// }



//[PROBLEM 13]
// int main(){
//     int num;
//     int arr[] = {1,2,3,4,5};
//     int len  = sizeof(arr)/sizeof(arr[0]);
//     printf("Enter a number : \n");
//     scanf("%d",&num);
//     int i;
//     int found = 0;
//     for(i = 0; i < len; i++){
//         if(arr[i] == num){
//             found = 1;
//             break;
//         }
//     }
//     if(found){
//         printf(" True\n");
//     }else{
//         printf(" False\n");
//     }
//     return 0;
// }



//[PROBLEM 15]
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int num, i;
//     printf("Enter a number to add :");
//     scanf("%d",&num);

//     int new_len = len + 1;
//     int new_arr[new_len];

//     for(i = 0; i < len; i++){
//         new_arr[i + 1] = arr[i];
//     }
//     new_arr[0] = num;
//     printf("Updated array :\n");
//     for( i = 0; i < new_len; i++){
//         printf("%d", new_arr[i]);
//     }
//     printf("\n");
//     return 0;
// }



//PROBLEM[16]
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int num, i, j;
//     printf("Enter a number to delete: ");
//     scanf("%d", &num);
//     // Find the index of the number to delete
//     int index = -1;
//     for (i = 0; i < size; i++) {
//         if (arr[i] == num) {
//             index = i;
//             break;
//         }
//     }
//     if (index != -1) {
//         // Shift the remaining elements to the left to fill the gap
//         for (j = index; j < size - 1; j++) {
//             arr[j] = arr[j + 1];
//         }
//         // Decrease the size of the array by 1
//         size--;
//         // Print the updated array
//         printf("Updated array: ");
//         for (i = 0; i < size; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     } else {
//         printf("Number not found in the array.\n");
//     }
//     return 0;
// }



//[PROBLEM 17]
// int main(){
//     int arr[]={3,5,9,1,7,0};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int num,i;
//     printf("Enter a positive number: ");
//     scanf("%d",&num);

//     if(num > 0){
//         int found = 0;
//         for(i = 0; i < len; i++){
//             if(arr[i] == num){
//                 found = 1;
//                 break;
//             }
//         }
//         if(found){
//             printf("True\n");
//         }else{
//             printf("False\n");
//         }
//     }else{
//         printf("Please enter a positive number.\n");
//         return 0;
//     }
// }



//[PROBLEM 18]
// int main(){
//     int arr[] = {10, 20, 30, 40, 50};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int i;

//     printf("Elements at even indexes : ");
//     for( i = 0; i < len; i++){
//         if(i % 2 == 0){
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }



//[PROBLEM 19]
// int main(){
//     int arr[] = {-1,-2,3,-4,5,-6};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int positive_count = 0;
//     int negative_count = 0;
//     int i;
//     for(i = 0; i < len; i++){
//         if(arr[i] > 0){
//             positive_count++;
//         }else if (arr[i] < 0){
//             negative_count++;
//         }
//     }
//     printf("Positive count: %d\n", positive_count);
//     printf("Negative count: %d\n", negative_count);
//     return 0;
// }



//[PROBLEM 20]
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int i;
//     int sorted = 1;
//     for(i = 0; i < len; i++){
//         if(arr[i] > arr[i + 1]){
//             sorted = 0;
//             break;
//         }
//     }
//     if(sorted){
//         printf("True\n");
//     }else{
//         printf("False\n");
//     }
//     return 0;
// }



//[PROBLEM 21]
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // Find, the maximum Element in Array
//     int max = arr[0]; 
//     for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     return 0;
// }



//[PROBLEM 23]
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int min = arr[0];
//     for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
//         if(arr[i] < min){
//             min = arr[i]; // Find ,The Minimum Element in Array
//         }
//     }
//         printf("Minimum element: %d\n", min);
//         return 0;
// }



//[PROBLEM 24]
// int main(){
//     int arr[]={80,20,30,50};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int i;
//     int mini = arr[0];
//     int max = arr[0];
//     for(i = 1; i < len; i++){
//         if(mini > arr[i]){
//             mini = arr[i];
//         }
//     }
//     for(i = 1; i <len; i++){
//         if(max < arr[i]){
//         max = arr[i];
//         }
//     }
//     int new_value = max - mini;
//     printf("%d\n",new_value);
//     return 0;
// }