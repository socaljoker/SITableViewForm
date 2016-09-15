//
//  FormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Validator.h"

@interface FormField : NSObject

@property (strong, nonatomic, nullable) NSString *title;
@property (strong, nonatomic, nullable) NSString *subtitle;
@property (strong, nonatomic, nullable) Validator *validator;

@end
