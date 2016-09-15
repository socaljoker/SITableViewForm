//
//  FormBuilderElement.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/15/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FormField.h"
#import "FormFieldTableViewCell.h"

typedef void (^CellInfoBlock)(FormFieldTableViewCell * _Nonnull cell);

@interface FormBuilderElement : NSObject

@property (strong, nonatomic, nonnull) FormFieldTableViewCell *cell;
@property (strong, nonatomic, nullable) CellInfoBlock customizationBlock;
@property (strong, nonatomic, nullable) CellInfoBlock updateBlock;
@property (strong, nonatomic, nullable) CellInfoBlock cellSelectionAction;
@property (strong, nonatomic, nullable) CellInfoBlock accessorySelectionAction;

+(instancetype _Nonnull)newElementWithFormField:(FormField * _Nonnull)field customizationBlock:(CellInfoBlock _Nullable)customizationBlock updateBlock:(CellInfoBlock _Nullable)updateBlock;
+(instancetype _Nonnull)newElementWithFormField:(FormField * _Nonnull)field customCellUI:(FormFieldTableViewCell * _Nonnull)cell customizationBlock:(CellInfoBlock _Nullable)customizationBlock updateBlock:(CellInfoBlock _Nullable)updateBlock;

@end
