//
//  NilValueValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "NilValueValidator.h"

@implementation NilValueValidator

-(NSError *)validate:(id)value {
    if (value == nil) {
        return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorEmptyValue userInfo:@{NSLocalizedDescriptionKey:@"Value cannot be empty."}];
    }
    else {
        return nil;
    }
}

@end
