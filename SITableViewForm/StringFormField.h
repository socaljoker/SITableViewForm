//
//  StringFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface StringFormField : FormField

@property (strong, nonatomic, nullable) NSString *currentValue;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSString * _Nullable value);

@end
