//
//  AVFDetailViewController.h
//  ControllingSource
//
//  Created by andre vinicius alves fonseca on 29/07/14.
//  Copyright (c) 2014 Andre Ltda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AVFDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
