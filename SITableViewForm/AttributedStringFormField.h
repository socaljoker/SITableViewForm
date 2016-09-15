//
//  AttributedStringFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface AttributedStringFormField : FormField

@property (strong, nonatomic, nullable) NSAttributedString *currentValue;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSAttributedString * _Nullable value);

@end
