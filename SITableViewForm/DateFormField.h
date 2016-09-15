//
//  DateFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface DateFormField : FormField

@property (strong, nonatomic, nullable) NSDate *currentValue;
@property (strong, nonatomic, nonnull) NSDateFormatter *formatter;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSDate * _Nullable value);

@end
