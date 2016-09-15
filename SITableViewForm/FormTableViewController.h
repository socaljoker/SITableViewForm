//
//  FormTableViewController.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Form.h"
#import "FormField.h"
#import "FormFieldTableViewCell.h"

#import "StringFormField.h"
#import "NumberFormField.h"
#import "DateFormField.h"
#import "AttributedStringFormField.h"
#import "BooleanFormField.h"
#import "ObjectSelectionFormField.h"
#import "MultipleObjectSelectionFormField.h"

@interface FormTableViewController : UITableViewController

@property (strong, nonatomic, nonnull) Form *form;
@property (nonatomic, copy, nullable) FormFieldTableViewCell *_Nullable (^customCellBlock)(UITableView * _Nonnull tableView, FormField * _Nonnull field, NSIndexPath * _Nonnull indexPath);
@property (nonatomic, copy, nullable) void (^customizeCellBlock)(UITableView * _Nonnull tableView, FormFieldTableViewCell * _Nonnull cell, NSIndexPath * _Nonnull indexPath);

@end
