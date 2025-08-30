#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
struct node{
    int data;
    char c;
    struct node* left;
    struct node* right;
};

void decode_huff(struct node* root, char* s){
    struct node* curr=root;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0') curr=curr->left;
        else curr=curr->right;
        if(curr->left==NULL && curr->right==NULL){
            printf("%c",curr->c);
            curr=root;
        }
    }
}

