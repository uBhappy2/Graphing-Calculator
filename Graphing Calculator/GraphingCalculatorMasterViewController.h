//
//  GraphingCalculatorMasterViewController.h
//  Graphing Calculator
//
//  Created by Amit Rao on 10/20/12.
//  Copyright (c) 2012 Amit Rao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GraphingCalculatorDetailViewController;

@interface GraphingCalculatorMasterViewController : UITableViewController

@property (strong, nonatomic) GraphingCalculatorDetailViewController *detailViewController;

@end
