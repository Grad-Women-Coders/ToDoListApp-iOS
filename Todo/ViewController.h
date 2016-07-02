//
//  ViewController.h
//  Todo
//
//  Created by Avanti Patil on 7/1/16.
//  Copyright © 2016 Avanti Patil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITextField *taskLabel;

- (IBAction)addButton:(id)sender;

@property (weak, nonatomic) IBOutlet UITableView *toDoTable;

@property (strong,nonatomic) NSMutableArray *todoArray;

@end

