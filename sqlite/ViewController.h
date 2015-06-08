//
//  ViewController.h
//  sqlite
//
//  Created by Ioan on 6/4/15.
//  Copyright (c) 2015 Ioan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *contactDB;

@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UILabel *state;

- (IBAction)SaveData:(id)sender;
- (IBAction)Find:(id)sender;
- (IBAction)RestDB:(id)sender;


@end

