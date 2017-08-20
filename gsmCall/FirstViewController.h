//
//  FirstViewController.h
//  gsmCall
//
//  Created by AKSHAT SHARMA on 03/10/16.
//  Copyright © 2016 AKSHAT SHARMA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *phoneNumber;
- (IBAction)dialPhoneNumber:(id)sender;

@end

