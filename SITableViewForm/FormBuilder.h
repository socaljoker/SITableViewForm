//
//  FormBuilder.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/15/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FormFieldSection.h"
#import "FormBuilderElement.h"

@interface FormBuilder : NSObject

@property (strong, nonatomic, nonnull) NSDictionary<FormFieldSection *, FormBuilderElement *> *formInfo;

+(instancetype _Nullable)buildFormWithSectionsAndElements:(NSDictionary<FormFieldSection *, FormBuilderElement *> * _Nonnull)formInfo;

@end
