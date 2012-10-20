//
//  GraphingCalculatorDetailViewController.h
//  Graphing Calculator
//
//  Created by Amit Rao on 10/20/12.
//  Copyright (c) 2012 Amit Rao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GraphingCalculatorDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
