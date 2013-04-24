//
//  DetailViewController.h
//  HolaMundo_002
//
//  Created by David Simón on 24/04/13.
//  Copyright (c) 2013 David Simón. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
