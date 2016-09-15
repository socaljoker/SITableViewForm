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

@property (strong, nonatomic, nullable) NSString *identifier;
@property (strong, nonatomic, nullable) NSString *title;
@property (strong, nonatomic, nullable) NSString *subtitle;
@property (strong, nonatomic, nullable) Validator *validator;

-(instancetype _Nonnull)initWithIdentifier:(NSString * _Nullable)identifier title:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle validator:(Validator * _Nullable)validator;

@end
