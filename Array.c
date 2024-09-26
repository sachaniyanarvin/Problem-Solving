// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sum ;
//     sum = arr[0];  // Add the first element to the sum variable
//     for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
//         sum += arr[i];
//     }
//                    // Print the sum of all elements in the array
//     printf("Sum of all elements: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sum = 0; 
//     double avg;
//     for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
//         sum += arr[i];
//     }
//     avg = (double)sum / (sizeof(arr)/sizeof(arr[0])); // This is the array average formulas
//     // Print the sum and average of all elements in the array
//     printf("Average of all element: %.2f \n",avg);
//     return 0;
// }


// #include <stdio.h>
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


// #include <stdio.h>
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


// #include <stdio.h>
// int main (){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int reversedArr[10];
//     // Reverse the array elements using a loop
//     for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
//     reversedArr[sizeof(arr)/sizeof(arr[0]) - 1 - i] = arr[i];
//     }
//     // Print the reversed array
//     printf("Reverse in arr element: ");
//     for(int i=0; i<sizeof(reversedArr)/sizeof(reversedArr[0]); i++){
//         printf("%d ,", reversedArr[i]);
//     }        
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int newArr[3];
//     for(int i = 0; i<3; i++){
//         newArr[i] = arr[i];
//     }
//     // Print the new array
//     printf("New array: ");
//     for(int i = 0; i<3; i++){
//         printf("%d ,", newArr[i]);
//     }
//     return 0;
// }

                                    // this is the same problem code 

// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int newArr[4];

//     for(int i = 0; i<4; i++){
//         newArr[i] = arr[i];
//         printf("%d,",newArr[i]);
//     }
//     return 0;
// }