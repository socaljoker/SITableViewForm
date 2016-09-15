//
//  NumberFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface NumberFormField : FormField

@property (strong, nonatomic, nullable) NSNumber *currentValue;
@property (strong, nonatomic, nonnull) NSNumberFormatter *formatter;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSNumber * _Nullable value);

@end
