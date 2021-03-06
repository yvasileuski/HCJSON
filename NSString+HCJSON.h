/*
 * NSString+CarbonateJSON.h
 * CarbonateJSON
 * 
 * Created by Árpád Goretity on 02/12/2011.
 * Licensed under a CreativeCommons Attribution 3.0 Unported License
 */

#import <Foundation/Foundation.h>
#import "HCJFunctions.h"

@interface NSString (HCJSON)
- (id <HCJCocoaContainer>)parseJSON;
@end
