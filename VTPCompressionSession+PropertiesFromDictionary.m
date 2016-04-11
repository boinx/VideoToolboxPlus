#import "VTPCompressionSession+PropertiesFromDictionary.h"


@implementation VTPCompressionSession (PropertiesFromDictionary)

- (void)setPropertiesFromDictionary:(NSDictionary *)dictionary error:(NSError **)outError
{
	__block NSError *error = nil;
	[dictionary enumerateKeysAndObjectsUsingBlock:^(id property, id value, BOOL *stop) {
		__autoreleasing NSError *childError;
		[self setValue:value forProperty:property error:&childError];
		if (!error)
		{
			error = childError;
		}
	}];
	*outError = error;
}

@end
