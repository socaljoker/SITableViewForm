//
//  FormField.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@implementation FormField

@synthesize title, subtitle;

-(instancetype)init {
    assert("FormField is an abstract class! Cannot create an instance of this object.");
    return nil;
}

@end
