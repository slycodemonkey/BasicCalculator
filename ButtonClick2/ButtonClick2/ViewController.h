//
//  ViewController.h
//  ButtonClick2
//
//  Created by Ernald on 5/5/16.
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(IBAction) numericalClick: (id) sender;

-(IBAction) symbolClick: (id) sender;

@end