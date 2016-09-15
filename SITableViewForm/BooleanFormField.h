//
//  BooleanFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface BooleanFormField : FormField

@property (nonatomic) BOOL currentValue;
@property (nonatomic, copy, nullable) void (^updateBlock)(BOOL value);

@end
