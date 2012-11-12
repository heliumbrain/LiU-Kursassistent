//
//  DetailViewController.h
//  LiU-Kursassistent
//
//  Created by Nils Kanevad on 11/12/12.
//  Copyright (c) 2012 Nils Kanevad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
