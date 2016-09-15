//
//  FormTableViewController.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormTableViewController.h"
#import "TextFieldFormFieldCell.h"

@interface FormTableViewController ()

@end

@implementation FormTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.clearsSelectionOnViewWillAppear = NO;
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;//self.form.groups.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 2;//[[self.form.groups objectAtIndex:section] count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        TextFieldFormFieldCell *cell = [[TextFieldFormFieldCell alloc] initWithReuseIdentifier:nil];
        
        return cell;
    }
    else {
        UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
        
        cell.textLabel.text = @"Test";
        
        return cell;
    }
    
//    FormField *field = [self.form formFieldAtIndexPath:indexPath];
//    
//    FormFieldTableViewCell *cell;
//    
//    if (self.customCellBlock) {
//        cell = self.customCellBlock(tableView, field, indexPath);
//    }
//    else {
//        #warning Implement standard UI cells
//    }
//    
//    cell.field = field;
//    
//    return cell;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
