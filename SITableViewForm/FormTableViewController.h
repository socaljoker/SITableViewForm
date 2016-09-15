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

@interface FormTableViewController : UITableViewController

@property (strong, nonatomic, nonnull) Form *form;
@property (nonatomic, copy, nullable) FormFieldTableViewCell *_Nullable (^customCellBlock)(UITableView * _Nonnull tableView, FormField * _Nonnull field, NSIndexPath * _Nonnull indexPath);
@property (nonatomic, copy, nullable) void (^customizeCellBlock)(UITableView * _Nonnull tableView, FormFieldTableViewCell * _Nonnull cell, NSIndexPath * _Nonnull indexPath);

@end
