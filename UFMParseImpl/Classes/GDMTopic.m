//
//  GDMTopic.m
//  Bolts
//
//  Created by XueFeng Chen on 2022/10/22.
//

#import "GDMTopic.h"

#import "GDMService.h"

@implementation GDMTopic

+ (GDMTopic *)topicWithMetaData:(id)metaData error:(NSError **)error {
    NSString *targetClassString = [NSString stringWithFormat:@"%@%@", NSStringFromClass([GDMTopic class]), [GDMService getImplString]];
    Class targetClass = NSClassFromString(targetClassString);
    return [[targetClass alloc] initWithMetaData:metaData error:error];
}

@end
