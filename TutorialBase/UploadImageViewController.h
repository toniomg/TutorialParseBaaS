//
//  TPUploadImageViewController.h
//  TutorialBase
//
//  Created by Antonio MG on 7/4/12.
//  Copyright (c) 2012 AMG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UploadImageViewController : UIViewController <UIPickerViewDelegate>


@property (nonatomic, strong) IBOutlet UIImageView *imgToUpload;
@property (nonatomic, strong) IBOutlet UITextField *commentTextField;
@property (nonatomic, strong) NSString *username;

-(IBAction)selectPicturePressed:(id)sender;

@end
