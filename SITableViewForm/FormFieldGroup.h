//
//  FormFieldGroup.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FormFieldGroup : NSObject

@property (strong, nonatomic, nullable) NSString *headerText;
@property (strong, nonatomic, nullable) NSString *footerText;
@property (strong, nonatomic, nonnull) NSArray *fields;

@end
