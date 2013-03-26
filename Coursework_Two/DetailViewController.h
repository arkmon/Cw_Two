//
//  DetailViewController.h
//  Coursework_Two
//
//  Created by Arkadiusz Dowejko on 26/03/2013.
//  Copyright (c) 2013 ArkadiuszDowejko_DamirOkic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
