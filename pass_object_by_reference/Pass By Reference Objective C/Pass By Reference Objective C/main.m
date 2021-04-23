//
//  main.m
//  Pass By Reference Objective C
//
//  Created by Panayotis Matsinopoulos on 25/3/21.
//

#import <Foundation/Foundation.h>

struct A {
  int a;
};

void incrementLocalCopy(struct A a) {
  a.a += 1;
}

//void incrementByReference(struct A &a) {
//  a.a += 1;
//}

int main(int argc, const char * argv[]) {
  @autoreleasepool {
    struct A a;
    a.a = 1;
    
    NSLog(@"a member has the value: %d\n", a.a);
    
    incrementLocalCopy(a);
    
    NSLog(@"after incrementLocalCopy: a member has the value: %d\n", a.a);
    
//    incrementByReference(a);
    
    NSLog(@"after incrementByReference: a member has the value: %d\n", a.a);
  }
  return 0;
}
